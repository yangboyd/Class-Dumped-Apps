//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSerengetiBasicObservable;

@interface SCSerengetiDefaultObservers : NSObject
{
    SCSerengetiBasicObservable *_onKeyboardWillAnimate;
    SCSerengetiBasicObservable *_onActive;
    SCSerengetiBasicObservable *_onInactive;
}

@property(readonly) SCSerengetiBasicObservable *onInactive; // @synthesize onInactive=_onInactive;
@property(readonly) SCSerengetiBasicObservable *onActive; // @synthesize onActive=_onActive;
@property(readonly) SCSerengetiBasicObservable *onKeyboardWillAnimate; // @synthesize onKeyboardWillAnimate=_onKeyboardWillAnimate;
- (void).cxx_destruct;
- (id)allDefaultObservables;
- (id)init;

@end

