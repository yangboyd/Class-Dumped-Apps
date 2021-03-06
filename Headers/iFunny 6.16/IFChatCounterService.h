//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IFObserversList;
@protocol _TtP25FCFuncorpNetworkingiFunny33NetworkUnreadChatsCountersService_;

@interface IFChatCounterService : NSObject
{
    _Bool _isUpdating;
    id <_TtP25FCFuncorpNetworkingiFunny33NetworkUnreadChatsCountersService_> _networkManager;
    IFObserversList *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) IFObserversList *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <_TtP25FCFuncorpNetworkingiFunny33NetworkUnreadChatsCountersService_> networkManager; // @synthesize networkManager=_networkManager;
@property _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
- (void)updateChatCounter;
- (void)notifyOnFailureUpdating:(id)arg1;
- (void)notifyOnSuccessUpdating:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)initPrivate;

@end

