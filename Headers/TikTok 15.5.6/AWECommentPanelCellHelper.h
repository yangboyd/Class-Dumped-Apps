//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWECommentPanelCellHelper : NSObject
{
}

+ (id)gifTagLabelView;
+ (struct CGSize)gifTagLabelViewSize;
+ (id)mtRelationTagLabel;
+ (id)relationTagLabel;
+ (id)mtFollowerTagLabel;
+ (id)mtAuthorTagLabel;
+ (id)tagToolTipView;
+ (id)followerTagLabel;
+ (id)customTagLabel;
+ (id)authorTagLabel;
+ (id)verticalPathWithHeight:(double)arg1;
+ (id)avatarImageWithColor:(id)arg1;
+ (id)defaultAvatarImage;
+ (id)replyToUserNamePrefix:(id)arg1;
+ (id)getUserName:(id)arg1;
+ (_Bool)likeLabelTooLong:(id)arg1;
+ (void)transferToProfileWithURL:(id)arg1 userModel:(id)arg2;
+ (id)attributedString:(id)arg1 appendTimeText:(id)arg2;
+ (id)nonLineBreakingString:(id)arg1;
+ (void)appendStickTagToAttributedString:(id)arg1;
+ (void)appendAdLinkIconToAttributedString:(id)arg1 linkText:(id)arg2;
+ (void)appendAdLinkIconToAttributedString:(id)arg1;
+ (void)applyHighlightForAttributedComment:(id)arg1 range:(struct _NSRange)arg2 hightlightId:(id)arg3 isCommerce:(_Bool)arg4 hightlightType:(long long)arg5 tapHighlightAction:(CDUnknownBlockType)arg6;
+ (void)addParagraphStyle:(id)arg1;
+ (id)extendAttributesForAttributedString:(id)arg1;
+ (void)highlightReplyUserNameWithContent:(id)arg1 prefix:(id)arg2 replyUserName:(id)arg3 replyUserID:(id)arg4;
+ (void)matchEmoticonForAttributedString:(id)arg1;
+ (void)matchEmoticonSizeForAttributedString:(id)arg1;
+ (void)addTextExtrasForAttrCommentContent:(id)arg1 prefix:(id)arg2 commentModel:(id)arg3 tapHighlightAction:(CDUnknownBlockType)arg4;
+ (_Bool)addHighlightForTranslatedAttrCommentContent:(id)arg1 tapHighlightAction:(CDUnknownBlockType)arg2;
+ (id)attributedContentForPreCalculateWithComment:(id)arg1 timestamp:(id)arg2 appendStickerAttachment:(_Bool)arg3;
+ (double)subCommentWidthWithCellWidth:(double)arg1 comment:(id)arg2;
+ (double)quotedCommentWidthWithCellWidth:(double)arg1;
+ (double)commentWidthWithCellWidth:(double)arg1 comment:(id)arg2;
+ (double)nameWidthWithCellWidth:(double)arg1;
+ (double)preCaculateContentHeightForComment:(id)arg1 timestamp:(id)arg2 commentWidth:(double)arg3 appendStickerAttachment:(_Bool)arg4;
+ (void)preCaculateLayoutForComment:(id)arg1 width:(double)arg2 forSubComment:(_Bool)arg3 showTimeText:(_Bool)arg4 appendStickerAttachment:(_Bool)arg5;
+ (void)preCaculateLayoutForComment:(id)arg1 width:(double)arg2 forSubComment:(_Bool)arg3 showTimeText:(_Bool)arg4;
+ (void)preCaculateLayoutForComment:(id)arg1 width:(double)arg2 showTimeText:(_Bool)arg3;
+ (void)preCaculateLayoutForComment:(id)arg1 showTimeText:(_Bool)arg2;
+ (double)calculateHeightFromCommentHeight:(double)arg1 replyHeight:(double)arg2 hasReply:(_Bool)arg3 forSubComment:(_Bool)arg4;
+ (double)videoReplyCellStillHeight;
+ (double)subCellStillHeight:(_Bool)arg1;
+ (double)replyCellStillHeight:(_Bool)arg1;
+ (double)cellStillHeight:(_Bool)arg1;
+ (double)cellStillHeightWithoutStickerImageView;
+ (double)cellHeightForComment:(id)arg1 width:(double)arg2 translationController:(id)arg3 forSubComment:(_Bool)arg4 showTimeText:(_Bool)arg5 appendStickerAttachment:(_Bool)arg6;
+ (double)cellHeightForComment:(id)arg1 width:(double)arg2 translationController:(id)arg3 forSubComment:(_Bool)arg4 showTimeText:(_Bool)arg5;
+ (double)cellHeightForComment:(id)arg1 width:(double)arg2 translationController:(id)arg3 showTimeText:(_Bool)arg4;
+ (double)cellHeightForComment:(id)arg1 showTimeText:(_Bool)arg2;

@end

