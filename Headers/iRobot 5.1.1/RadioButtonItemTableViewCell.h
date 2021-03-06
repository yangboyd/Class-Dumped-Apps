//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface RadioButtonItemTableViewCell : UITableViewCell
{
    UILabel *_itemLabel;
    UIImageView *_selectedView;
    UIImageView *_unselectedView;
}

+ (id)defaultNib;
- (void).cxx_destruct;
@property(nonatomic) __weak UIImageView *unselectedView; // @synthesize unselectedView=_unselectedView;
@property(nonatomic) __weak UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(nonatomic) __weak UILabel *itemLabel; // @synthesize itemLabel=_itemLabel;
- (void)updateRadioButtonOnSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

