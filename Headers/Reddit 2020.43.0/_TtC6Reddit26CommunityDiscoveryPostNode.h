//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

@protocol _TtP6Reddit34CommunityDiscoveryPostNodeDelegate_;

@interface _TtC6Reddit26CommunityDiscoveryPostNode : ASDisplayNode
{
    // Error parsing type: , name: communityDiscoveryViewContext
    // Error parsing type: , name: post
    // Error parsing type: , name: delegate
    // Error parsing type: , name: observation
    // Error parsing type: , name: titleNode
    // Error parsing type: , name: scoreNode
    // Error parsing type: , name: backgroundNode
    // Error parsing type: , name: thumbnailNode
}

- (void).cxx_destruct;
- (id)init;
- (void)didEnterVisibleState;
- (void)didTapNodeWithGesture:(id)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)initWithCommunityDiscoveryViewContext:(id)arg1 post:(id)arg2;
@property(nonatomic) __weak id <_TtP6Reddit34CommunityDiscoveryPostNodeDelegate_> delegate; // @synthesize delegate;

@end

