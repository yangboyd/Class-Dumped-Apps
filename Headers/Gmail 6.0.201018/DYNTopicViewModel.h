//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNPostboxContent, NSString;
@protocol DYNGroupBase, DYNGroupId, DYNMessage, DYNTopicCVOProvider, DYNTopicId;

@interface DYNTopicViewModel : NSObject
{
    _Bool _offTheRecord;
    _Bool _openedFromNotification;
    NSString *_groupName;
    id <DYNGroupId> _groupID;
    id <DYNTopicId> _topicID;
    id <DYNGroupBase> _groupModel;
    id <DYNTopicCVOProvider> _topicCVOProvider;
    double _topicPresentationBottomInset;
    id <DYNMessage> _forwardingMessage;
    DYNPostboxContent *_postboxContent;
}

+ (id)topicViewModelFromDeepLinkWithTopicID:(id)arg1 groupID:(id)arg2;
+ (id)topicViewModelForLoadingViewWithTopicID:(id)arg1 groupModel:(id)arg2 openedFromNotification:(_Bool)arg3;
+ (id)topicViewModelForNewTopicWithGroupID:(id)arg1;
+ (id)topicViewModelForNewTopicWithGroupModel:(id)arg1;
+ (id)topicViewModelFromSearchForTopic:(id)arg1 groupName:(id)arg2;
+ (id)topicViewModelFromSpaceForTopic:(id)arg1 groupName:(id)arg2 groupModel:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool openedFromNotification; // @synthesize openedFromNotification=_openedFromNotification;
@property(retain, nonatomic) DYNPostboxContent *postboxContent; // @synthesize postboxContent=_postboxContent;
@property(retain, nonatomic) id <DYNMessage> forwardingMessage; // @synthesize forwardingMessage=_forwardingMessage;
@property(nonatomic) double topicPresentationBottomInset; // @synthesize topicPresentationBottomInset=_topicPresentationBottomInset;
@property(retain, nonatomic) id <DYNTopicCVOProvider> topicCVOProvider; // @synthesize topicCVOProvider=_topicCVOProvider;
@property(retain, nonatomic) id <DYNGroupBase> groupModel; // @synthesize groupModel=_groupModel;
@property(nonatomic) _Bool offTheRecord; // @synthesize offTheRecord=_offTheRecord;
@property(retain, nonatomic) id <DYNTopicId> topicID; // @synthesize topicID=_topicID;
@property(readonly, nonatomic) id <DYNGroupId> groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (id)initWithGroupID:(id)arg1 groupName:(id)arg2 topicID:(id)arg3;

@end

