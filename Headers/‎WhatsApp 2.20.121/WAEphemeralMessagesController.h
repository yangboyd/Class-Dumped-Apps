//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WARemoveExpiredEphemeralMessagesTaskDataSource-Protocol.h"
#import "WARemoveExpiredEphemeralMessagesTaskDelegate-Protocol.h"
#import "WAUpgradeCallback-Protocol.h"

@class NSDate, NSString, WAChatStorage, WAExactTimer, WARemoveExpiredEphemeralMessagesTask, WATaskManager;
@protocol OS_dispatch_queue, WAServerDate;

@interface WAEphemeralMessagesController : NSObject <WARemoveExpiredEphemeralMessagesTaskDelegate, WARemoveExpiredEphemeralMessagesTaskDataSource, WAUpgradeCallback>
{
    WAChatStorage *_chatStorage;
    WATaskManager *_taskManager;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isUpdatingDisplayDate;
    NSDate<WAServerDate> *_displayDate;
    NSDate<WAServerDate> *_nextMessageExpirationDate;
    WAExactTimer *_nextMessageExpirationDateTimer;
    WARemoveExpiredEphemeralMessagesTask *_task;
}

+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
+ (void)syncGroupEphemeralitySettingIfNeeded;
+ (id)predicateForNonExpiredEphemeralMessagesWithWAMessageProperty;
+ (id)predicateForNonExpiredEphemeralMessagesWithMediaItemEntity;
+ (id)predicateForNonExpiredEphemeralMessagesWithMessageDataItem;
+ (id)predicateForNonExpiredEphemeralMessages;
- (void).cxx_destruct;
@property(retain, nonatomic) WARemoveExpiredEphemeralMessagesTask *task; // @synthesize task=_task;
- (void)didUpdateServerProperties:(id)arg1;
- (void)startTimerWithExpirationDateIfNeeded:(id)arg1;
- (void)stopTimer;
- (_Bool)isMessageExpired:(id)arg1;
- (void)loadDeferredObjects;
@property(nonatomic) _Bool isUpdatingDisplayDate; // @synthesize isUpdatingDisplayDate=_isUpdatingDisplayDate;
@property(retain, nonatomic) WAExactTimer *nextMessageExpirationDateTimer; // @synthesize nextMessageExpirationDateTimer=_nextMessageExpirationDateTimer;
@property(readonly, nonatomic) NSDate<WAServerDate> *displayDate; // @synthesize displayDate=_displayDate;
- (void)setDisplayDate:(id)arg1;
@property(retain, nonatomic) NSDate<WAServerDate> *nextMessageExpirationDate; // @synthesize nextMessageExpirationDate=_nextMessageExpirationDate;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)postDidUpdateDisplayDateNotification;
- (void)messageDidUpdateExpirationDate:(id)arg1;
- (void)chatListViewControllerDidEndSearchNotification:(id)arg1;
- (void)chatMessagesViewControllerDidDisappear:(id)arg1;
- (void)updateUIFilteringDisplayDateAndScheduleTaskIfNeeded;
- (void)removeExpiredEphemeralMessagesTaskDidEndPruningRun:(id)arg1 nextMessageExpirationDate:(id)arg2;
- (id)dateToBeginPruningRunInRemoveExpiredEphemeralMessagesTask:(id)arg1;
- (void)scheduleRemoveExpiredMessagesTask;
- (void)dealloc;
- (id)initWithChatStorage:(id)arg1 taskManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

