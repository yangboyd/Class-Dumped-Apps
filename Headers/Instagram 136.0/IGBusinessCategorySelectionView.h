//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIPickerView;
@protocol IGBusinessCategorySelectionViewDelegate;

@interface IGBusinessCategorySelectionView : UIView
{
    UIView *_actionContainerView;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    id <IGBusinessCategorySelectionViewDelegate> _delegate;
    UIPickerView *_pickerView;
}

@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak id <IGBusinessCategorySelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_cancelButtonPressed;
- (void)_doneButtonPressed;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

@end

