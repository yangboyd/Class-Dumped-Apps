//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEFeedAnchorBaseConfig.h"

@class AWEMarkView;

@interface AWEFeedAnchorMediumConfig : AWEFeedAnchorBaseConfig
{
    AWEMarkView *_mediumButton;
}

+ (_Bool)hasAnchorViewDataWithAwemeModelForCommentList:(id)arg1 extraInfo:(id)arg2;
+ (_Bool)hasAnchorViewDataWithAwemeModelForFeed:(id)arg1 extraInfo:(id)arg2;
+ (id)anchorType;
@property(retain, nonatomic) AWEMarkView *mediumButton; // @synthesize mediumButton=_mediumButton;
- (void).cxx_destruct;
- (CDUnknownBlockType)layoutWithAwemeModel:(id)arg1 commonLayoutInfo:(id)arg2;
- (void)updateWithAwemeModel:(id)arg1;
- (id)anchorViewWithModel:(id)arg1;

@end

