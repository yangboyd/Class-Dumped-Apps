//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSUIModelsImplUiInvitedGroupSummariesImpl_Builder.h"

@class ComGoogleCommonCollectImmutableList, JavaLangLong;

@interface DYNSUIModelsImplAutoValue_UiInvitedGroupSummariesImpl_Builder : DYNSUIModelsImplUiInvitedGroupSummariesImpl_Builder
{
    ComGoogleCommonCollectImmutableList *invitedGroupSummaries_;
    JavaLangLong *invitedRoomsLastViewedTimeMicros_;
}

- (void)dealloc;
- (id)build;
- (id)setInvitedRoomsLastViewedTimeMicrosWithLong:(long long)arg1;
- (id)setInvitedGroupSummariesWithComGoogleCommonCollectImmutableList:(id)arg1;

@end

