//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol SCDataHandlerObserverListDelegate;

@interface SCDataHandlerObserverList : NSObject
{
    NSMutableArray *_observers;
    _Bool _hasObservers;
    id <SCDataHandlerObserverListDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool hasObservers; // @synthesize hasObservers=_hasObservers;
@property(nonatomic) __weak id <SCDataHandlerObserverListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)addObserverWithBlock:(CDUnknownBlockType)arg1;
- (void)_removeObserver:(id)arg1;
- (void)removeAllObservers;
- (void)notifyWithHandler:(id)arg1;
- (id)init;

@end

