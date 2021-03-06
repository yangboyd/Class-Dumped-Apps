//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSSyncV2EntitiesGroupEntityManagerRegistry, DYNSSyncV2EntitiesUserEntityManagerRegistry, DYNSSyncV2GroupEventHandlerLauncher, DYNSSyncV2WebChannelEventBufferManager_EventBuffer, JavaUtilOptional;
@protocol DYNSAnalyticsClearcutEventsLogger, DYNSCommonDynamiteClock, JavaUtilConcurrentScheduledExecutorService, JavaUtilMap;

@interface DYNSSyncV2WebChannelEventBufferManager : NSObject
{
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    id <DYNSCommonDynamiteClock> dynamiteClock_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    DYNSSyncV2GroupEventHandlerLauncher *groupEventHandlerLauncher_;
    id <JavaUtilConcurrentScheduledExecutorService> scheduledExecutorService_;
    DYNSSyncV2EntitiesUserEntityManagerRegistry *userEntityManagerRegistry_;
    id lock_;
    id <JavaUtilMap> groupEventBuffers_;
    DYNSSyncV2WebChannelEventBufferManager_EventBuffer *userEventBuffer_;
    JavaUtilOptional *bufferAllEventsLevel_;
}

+ (void)initialize;
- (void)dealloc;
- (id)computeBufferLevelWithDYNSSyncApiRevisionedUserEvent:(id)arg1;
- (id)computeBufferLevelWithDYNSSyncApiRevisionedGroupEvent:(id)arg1;
- (void)bufferAllEventsWithJavaUtilOptional:(id)arg1;
- (id)flushUserEventsBeforeCatchUp;
- (id)flushGroupEventsBeforeCatchUpWithDYNSCommonGroupId:(id)arg1;
- (void)enqueueUserEventWithDYNSSyncApiRevisionedUserEvent:(id)arg1;
- (void)enqueueGroupEventWithDYNSSyncApiRevisionedGroupEvent:(id)arg1;

@end

