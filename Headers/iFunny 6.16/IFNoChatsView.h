//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, UILabel;
@protocol IFNoChatsViewDelegate;

@interface IFNoChatsView : UIView
{
    UILabel *_emojiLabel;
    NSObject<IFNoChatsViewDelegate> *_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSObject<IFNoChatsViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UILabel *emojiLabel; // @synthesize emojiLabel=_emojiLabel;
- (void)joinPublicChatTapped:(id)arg1;
- (void)chatCreateTapped:(id)arg1;
- (id)addJoinPublicChatButtonWithTopConstraintAttribute:(id)arg1 height:(double)arg2;
- (id)addOrLabelWithTopConstraintAttribute:(id)arg1 height:(double)arg2;
- (id)addNewChatButtonWithTopConstraintAttribute:(id)arg1 brightStyle:(_Bool)arg2;
- (id)addNoChatsTextLabelWithTopConstraintAttribute:(id)arg1;
- (id)addEmojiLabel;
- (void)setupWithJoinOpenChatButton:(_Bool)arg1;
- (id)initWithJoinOpenChatButton:(_Bool)arg1;
- (id)init;

@end

