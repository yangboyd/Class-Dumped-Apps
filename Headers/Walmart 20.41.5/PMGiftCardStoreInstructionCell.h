//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel;

@interface PMGiftCardStoreInstructionCell : UITableViewCell
{
    UIImageView *_separartorLine;
    UILabel *_instructionTitle;
    UILabel *_instructionLabel;
    UIImageView *_exampleCard;
    UIImageView *_giftCardIcon;
    UIButton *_showHideButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *showHideButton; // @synthesize showHideButton=_showHideButton;
@property(retain, nonatomic) UIImageView *giftCardIcon; // @synthesize giftCardIcon=_giftCardIcon;
@property(retain, nonatomic) UIImageView *exampleCard; // @synthesize exampleCard=_exampleCard;
@property(retain, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(retain, nonatomic) UILabel *instructionTitle; // @synthesize instructionTitle=_instructionTitle;
@property(nonatomic) __weak UIImageView *separartorLine; // @synthesize separartorLine=_separartorLine;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

