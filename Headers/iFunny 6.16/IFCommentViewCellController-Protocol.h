//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class FNROContent, FNROUser, IFCommentsTableViewCell, NSObject;
@protocol IFCommentInfoProtocol;

@protocol IFCommentViewCellController <NSObject>
- (void)showUser:(FNROUser *)arg1;
- (void)showContent:(FNROContent *)arg1;
- (void)onFreshAnswersButton:(IFCommentsTableViewCell *)arg1;
- (void)onCommentForCell:(IFCommentsTableViewCell *)arg1;
- (void)onAnswersForCell:(IFCommentsTableViewCell *)arg1;
- (void)onUnsmile:(NSObject<IFCommentInfoProtocol> *)arg1 forCell:(IFCommentsTableViewCell *)arg2;
- (void)onSmile:(NSObject<IFCommentInfoProtocol> *)arg1 forCell:(IFCommentsTableViewCell *)arg2;
- (void)onAvatar:(NSObject<IFCommentInfoProtocol> *)arg1;
- (void)updateAttachmentCellFrame;

@optional
- (void)onCheckedForCell:(IFCommentsTableViewCell *)arg1;
- (_Bool)canShowFullComment;
- (void)onContent:(NSObject<IFCommentInfoProtocol> *)arg1 commentCell:(IFCommentsTableViewCell *)arg2;
@end

