//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncV2GroupEventHandlerLauncher_Request.h"

@class ComGoogleCommonCollectImmutableList, DYNSCommonInternalRequestContext, DYNSSyncV2EntitiesEventSource;

@interface DYNSSyncV2AutoValue_GroupEventHandlerLauncher_Request : DYNSSyncV2GroupEventHandlerLauncher_Request
{
    DYNSCommonInternalRequestContext *requestContext_;
    ComGoogleCommonCollectImmutableList *events_;
    DYNSSyncV2EntitiesEventSource *eventSource_;
    _Bool canInitializeRevision_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)getCanInitializeRevision;
- (id)getEventSource;
- (id)getEvents;
- (id)getRequestContext;

@end

