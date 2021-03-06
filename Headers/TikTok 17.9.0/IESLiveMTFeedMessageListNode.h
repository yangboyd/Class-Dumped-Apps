//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPBMessage, IESLiveUserModel, NSArray, NSAttributedString, NSString, UIColor;

@interface IESLiveMTFeedMessageListNode : NSObject
{
    _Bool _isStaticHeightMessage;
    GPBMessage *_message;
    NSAttributedString *_attributedString;
    double _preferredMaxLayoutWidth;
    NSString *_title;
    NSString *_content;
    UIColor *_titleColor;
    UIColor *_contentColor;
    IESLiveUserModel *_senderUser;
    NSArray *_badgeList;
    struct CGSize _size;
    struct _NSRange _hightlightRange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *badgeList; // @synthesize badgeList=_badgeList;
@property(nonatomic) struct _NSRange hightlightRange; // @synthesize hightlightRange=_hightlightRange;
@property(nonatomic) _Bool isStaticHeightMessage; // @synthesize isStaticHeightMessage=_isStaticHeightMessage;
@property(retain, nonatomic) IESLiveUserModel *senderUser; // @synthesize senderUser=_senderUser;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) UIColor *contentColor; // @synthesize contentColor=_contentColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) GPBMessage *message; // @synthesize message=_message;
- (id)copy;

@end

