//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class NSString, Post, SharePostNode, UIImage;

@interface _TtC6Reddit23SnapchatStickerActivity : UIActivity
{
    // Error parsing type: , name: isBadged
    // Error parsing type: , name: image
    // Error parsing type: , name: post
    // Error parsing type: , name: sharePostNode
}

+ (_Bool)canOpen;
+ (long long)activityCategory;
+ (id)activityType;
- (void).cxx_destruct;
- (id)init;
- (void)shareImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
@property(nonatomic, readonly) NSString *activityType;
@property(nonatomic, readonly) UIImage *activityImage;
@property(nonatomic, readonly) NSString *activityTitle;
- (id)initWithBadged:(_Bool)arg1;
@property(nonatomic, retain) SharePostNode *sharePostNode; // @synthesize sharePostNode;
@property(nonatomic, retain) Post *post; // @synthesize post;
@property(nonatomic, retain) UIImage *image; // @synthesize image;
@property(nonatomic, readonly) _Bool isBadged; // @synthesize isBadged;

@end

