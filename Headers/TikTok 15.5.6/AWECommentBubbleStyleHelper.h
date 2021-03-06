//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, UIColor, UIImage;

@interface AWECommentBubbleStyleHelper : NSObject
{
    NSAttributedString *_replyText;
    NSAttributedString *_contentText;
    long long _contentNumberOfLines;
    UIImage *_avatarImage;
    UIColor *_contentColor;
    UIColor *_replyColor;
}

+ (id)helperWithBubbleModel:(id)arg1;
@property(retain, nonatomic) UIColor *replyColor; // @synthesize replyColor=_replyColor;
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(nonatomic) long long contentNumberOfLines; // @synthesize contentNumberOfLines=_contentNumberOfLines;
@property(retain, nonatomic) NSAttributedString *contentText; // @synthesize contentText=_contentText;
@property(retain, nonatomic) NSAttributedString *replyText; // @synthesize replyText=_replyText;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *defaultAvatarImage;
@property(readonly, nonatomic) UIImage *bubbleImage;
- (double)attributedContentStringlineHeightWithTextLines:(long long)arg1;
- (id)contentFontForTextLines:(long long)arg1;
- (long long)numberOfLineWithStandardFontForContent:(id)arg1;
- (id)attributedStringWithContent:(id)arg1 font:(id)arg2 lineHeight:(double)arg3 fontColor:(id)arg4;
- (id)attributedContentStringWithContent:(id)arg1 font:(id)arg2 lineHeight:(double)arg3 fontColor:(id)arg4;
- (void)matchEmoticonForAttributedString:(id)arg1 font:(id)arg2;
- (id)contentAttributedStringWithContent:(id)arg1;
- (id)replyAttributedStringWithUserName:(id)arg1;

@end

