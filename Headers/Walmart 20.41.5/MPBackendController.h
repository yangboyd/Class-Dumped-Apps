//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAppDelegateProxy, MPNetworkCommunication, MPNotificationController, MPSession, NSMutableSet, NSNotification;
@protocol MPBackendControllerDelegate, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface MPBackendController : NSObject
{
    MPAppDelegateProxy *appDelegateProxy;
    NSMutableSet *deletedUserAttributes;
    NSNotification *didFinishLaunchingNotification;
    double nextCleanUpTime;
    double timeAppWentToBackground;
    NSObject<OS_dispatch_source> *backgroundSource;
    NSObject<OS_dispatch_source> *uploadSource;
    unsigned long long backendBackgroundTaskIdentifier;
    NSObject<OS_dispatch_semaphore> *backendSemaphore;
    NSObject<OS_dispatch_queue> *messageQueue;
    _Bool originalAppDelegateProxied;
    _Bool resignedActive;
    MPSession *_session;
    double _uploadInterval;
    MPNotificationController *_notificationController;
    id <MPBackendControllerDelegate> _delegate;
    NSMutableSet *_eventSet;
    MPNetworkCommunication *_networkCommunication;
    double _sessionTimeout;
}

+ (_Bool)checkAttribute:(id)arg1 key:(id)arg2 value:(id)arg3 error:(out id *)arg4;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) double sessionTimeout; // @synthesize sessionTimeout=_sessionTimeout;
@property(retain, nonatomic) MPNetworkCommunication *networkCommunication; // @synthesize networkCommunication=_networkCommunication;
@property(retain, nonatomic) NSMutableSet *eventSet; // @synthesize eventSet=_eventSet;
@property(nonatomic) __weak id <MPBackendControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logUserNotification:(id)arg1;
- (void)handleDeviceTokenNotification:(id)arg1;
@property(retain, nonatomic) MPNotificationController *notificationController; // @synthesize notificationController=_notificationController;
- (unsigned long long)endLocationTracking;
- (unsigned long long)beginLocationTrackingWithAccuracy:(double)arg1 distanceFilter:(double)arg2 authorizationRequest:(unsigned long long)arg3;
- (void)clearUserAttributes;
- (void)setUserIdentity:(id)arg1 identityType:(unsigned long long)arg2 timestamp:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeUserAttribute:(id)arg1 timestamp:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setUserAttribute:(id)arg1 values:(id)arg2 timestamp:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setUserAttribute:(id)arg1 value:(id)arg2 timestamp:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)checkForKitsAndUploadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)waitForKitsAndUploadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveMessage:(id)arg1 updateSession:(_Bool)arg2;
- (void)startWithKey:(id)arg1 secret:(id)arg2 firstRun:(_Bool)arg3 installationType:(long long)arg4 proxyAppDelegate:(_Bool)arg5 startKitsAsync:(_Bool)arg6 consentState:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (unsigned long long)setSessionAttribute:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setOptOut:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)logScreen:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)logNetworkPerformanceMeasurement:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)logCommerceEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)logEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)logBaseEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)logError:(id)arg1 exception:(id)arg2 topmostContext:(id)arg3 eventInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)leaveBreadcrumb:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)incrementUserAttribute:(id)arg1 byValue:(id)arg2;
- (id)incrementSessionAttribute:(id)arg1 key:(id)arg2 byValue:(id)arg3;
- (id)execStatusDescription:(unsigned long long)arg1;
- (unsigned long long)fetchSegments:(double)arg1 endpointId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)eventWithName:(id)arg1;
- (void)beginTimedEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)endSessionWithIsManual:(_Bool)arg1;
- (void)beginSessionWithIsManual:(_Bool)arg1 date:(id)arg2;
- (void)endSession;
- (void)beginSession;
@property(nonatomic) double uploadInterval; // @synthesize uploadInterval=_uploadInterval;
- (void)endUploadTimer;
- (void)endBackgroundTimer;
- (id)createSourceTimer:(unsigned long long)arg1 eventHandler:(CDUnknownBlockType)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void)beginUploadTimer;
- (void)beginBackgroundTimer;
- (void)handleApplicationWillResignActive:(id)arg1;
- (void)handleApplicationDidBecomeActive:(id)arg1;
- (void)handleNetworkPerformanceNotification:(id)arg1;
- (void)handleApplicationDidFinishLaunching:(id)arg1;
- (void)handleApplicationWillEnterForeground:(id)arg1;
- (_Bool)shouldEndSession;
- (void)handleApplicationDidEnterBackground:(id)arg1;
- (void)uploadOpenSessions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadBatchesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)skipNextUpload;
- (id)batchMessageArraysFromMessageArray:(id)arg1 maxBatchMessages:(long long)arg2 maxBatchBytes:(long long)arg3 maxMessageBytes:(long long)arg4;
- (void)setUserAttributeChange:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestConfig:(CDUnknownBlockType)arg1;
- (void)proxyOriginalAppDelegate;
- (void)processPendingArchivedMessages;
- (void)processOpenSessionsEndingCurrent:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)processDidFinishLaunching:(id)arg1;
- (void)setPreviousSessionSuccessfullyClosed:(id)arg1;
- (id)previousSessionSuccessfullyClosed;
- (void)logUserIdentityChange:(id)arg1;
- (void)logUserAttributeChange:(id)arg1;
- (void)cleanUp;
- (void)broadcastSessionDidEnd:(id)arg1;
- (void)broadcastSessionDidBegin:(id)arg1;
- (void)endBackgroundTask;
- (void)confirmEndSessionMessage:(id)arg1;
- (void)backgroundTaskBlock;
- (void)beginBackgroundTask;
- (id)userIdentitiesForUserId:(id)arg1;
- (id)userAttributesForUserId:(id)arg1;
@property(retain, nonatomic) MPSession *session; // @synthesize session=_session;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

