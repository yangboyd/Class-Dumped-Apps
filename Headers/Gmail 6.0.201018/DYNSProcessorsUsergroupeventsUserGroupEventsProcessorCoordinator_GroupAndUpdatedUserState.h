//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSDataModelsGroupUserState_Builder, DYNSDataModelsGroup_Builder, JavaUtilOptional;

@interface DYNSProcessorsUsergroupeventsUserGroupEventsProcessorCoordinator_GroupAndUpdatedUserState : NSObject
{
    DYNSDataModelsGroup_Builder *groupBuilder_;
    DYNSDataModelsGroupUserState_Builder *groupUserStateBuilder_;
    JavaUtilOptional *nonWorldMetadataBuilder_;
}

- (void)dealloc;
- (void)setSnippetWithJavaUtilOptional:(id)arg1;
- (void)setContainsFirstTopicWithBoolean:(_Bool)arg1;
- (id)toGroup;
- (id)getNonWorldMetadataBuilder;
- (id)getGroupUserStateBuilder;

@end

