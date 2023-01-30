using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class InGameObjectManager : SingletonStatic<InGameObjectManager>
{
    // List<Action> callbacks = new List<Action>();

    List<List<object>> callbacks = new List<List<object>>();

    Dictionary<ObjectPool, List<GameObject>> clearableObjectDic = new Dictionary<ObjectPool, List<GameObject>>();

    // public void AddClearObejctListener(Action callback)
    // {
    //     if (!this.callbacks.Contains(callback))
    //         this.callbacks.Add(callback);
    // }

    // public void ClearInGameObjects()
    // {
    //     foreach (Action action in callbacks)
    //     {
    //         action?.Invoke();
    //     }
    // }

    // public void AddClearObejctListener(List<object> callback)
    // {
    //     if (!this.callbacks.Contains(callback))
    //         this.callbacks.Add(callback);
    // }

    // public void ClearInGameObjects()
    // {
    //     foreach (List<object> action in callbacks)
    //     {
    //         action.Clear();
    //     }
    // }

    public void AddClearableObejctListener(ref List<GameObject> list, ref ObjectPool pool)
    {
        if (!this.clearableObjectDic.ContainsKey(pool))
            this.clearableObjectDic.Add(pool, list);
    }

    public void ClearInGameObjects()
    {
        foreach (var action in clearableObjectDic)
        {
            print(action.Value.Count);
            for (int i = 0; i < action.Value.Count; i++)
            {
                action.Key.EnqueueObject(action.Value[i]);
            }
        }
    }
}
