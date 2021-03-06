//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSUIModelsStreamSubscriptionConfig_Builder.h"

@class ComGoogleCommonCollectImmutableMap, DYNSCommonGroupId, DYNSCommonStreamDataRequest, JavaLangBoolean, JavaLangInteger, JavaUtilOptional;

@interface DYNSUIModelsAutoValue_StreamSubscriptionConfig_Builder : DYNSUIModelsStreamSubscriptionConfig_Builder
{
    DYNSCommonGroupId *groupId_;
    JavaUtilOptional *topicId_;
    DYNSCommonStreamDataRequest *initialRequest_;
    JavaLangInteger *upwardPagination_;
    JavaLangInteger *downwardPagination_;
    JavaLangBoolean *resetRequest_;
    JavaLangBoolean *active_;
    ComGoogleCommonCollectImmutableMap *topicPagination_;
}

- (void)dealloc;
- (id)build;
- (id)getTopicPagination;
- (id)setTopicPaginationWithJavaUtilMap:(id)arg1;
- (id)setActiveWithBoolean:(_Bool)arg1;
- (id)setResetRequestWithBoolean:(_Bool)arg1;
- (id)setDownwardPaginationWithInt:(int)arg1;
- (id)setUpwardPaginationWithInt:(int)arg1;
- (id)setInitialRequestWithDYNSCommonStreamDataRequest:(id)arg1;
- (id)setTopicIdWithDYNSCommonTopicId:(id)arg1;
- (id)setGroupIdWithDYNSCommonGroupId:(id)arg1;

@end

