//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface PLKMfaSelectionPaneTableViewCell : UITableViewCell
{
    UILabel *_answerLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *answerLabel; // @synthesize answerLabel=_answerLabel;
- (void)switchToLightBackground:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)textLabel;
- (void)awakeFromNib;

@end

