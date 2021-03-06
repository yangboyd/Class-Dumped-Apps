//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSString, TikTokNoticeTemplateModel;

@interface TikTokNoticeTemplateCellBaseElement : UIView <UIGestureRecognizerDelegate>
{
    TikTokNoticeTemplateModel *_templateModel;
}

+ (id)formateLocalDetailStr:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) TikTokNoticeTemplateModel *templateModel; // @synthesize templateModel=_templateModel;
- (void)didTapLinkHighlight:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)didTapUserView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)displayName:(id)arg1;
- (void)configBadgeForAvatarView:(id)arg1 user:(id)arg2;
- (void)applyHighlightForName:(id)arg1 range:(struct _NSRange)arg2 userId:(id)arg3;
- (void)applyHighligtAttributedString:(id)arg1 ForUsers:(id)arg2;
- (void)truncationAttributedStringForContentLabel:(id)arg1 ContentWithTimestamp:(id)arg2 ContentWithoutTimestamp:(id)arg3 sizeWithTimestamp:(struct CGSize)arg4 sizeWithoutTimestamp:(struct CGSize)arg5 timestampStr:(id)arg6 maxNumberOfLines:(long long)arg7;
- (struct CGRect)aspectFillModeFrameOfContentWithContentSize:(struct CGSize)arg1 containerSize:(struct CGSize)arg2;
- (id)emotionForAttributedString:(id)arg1 isYYLabel:(_Bool)arg2;
- (id)attributedStringWithFormatString:(id)arg1 params:(id)arg2 attributes:(id)arg3;
- (id)attributedStringWithFormatString:(id)arg1 params:(id)arg2;
@property(readonly, nonatomic) NSDictionary *timestampAttributes;
@property(readonly, nonatomic) NSDictionary *highlightedTitleAttributes;
@property(readonly, nonatomic) NSDictionary *descriptionEventAttributes;
@property(readonly, nonatomic) NSDictionary *descriptionContentAttributes;
@property(readonly, nonatomic) NSDictionary *highlightedAttributes;
@property(readonly, nonatomic) NSDictionary *commonAttributes;
- (void)setAvatarImageView:(id)arg1 withURLList:(id)arg2 uri:(id)arg3 imageViewSize:(struct CGSize)arg4 userOpaquePlaceHolder:(_Bool)arg5;
- (void)setAvatarImageView:(id)arg1 withURLList:(id)arg2 uri:(id)arg3 imageViewSize:(struct CGSize)arg4;
- (void)setNotificationImageView:(id)arg1 withURLList:(id)arg2 uri:(id)arg3 imageViewSize:(struct CGSize)arg4 cornerRadius:(double)arg5 placeholderImage:(CDUnknownBlockType)arg6;
- (void)setCoverImageView:(id)arg1 withURLList:(id)arg2 uri:(id)arg3 imageViewSize:(struct CGSize)arg4;
- (void)userTapped:(id)arg1;
- (void)configUserViewForTapAction:(id)arg1;
- (void)updateElementTemplateModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

