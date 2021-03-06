//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIButton, UIImageView;
@protocol ColorVariationDelegate;

@interface ColorVariationPickerView : UIView
{
    NSArray *_boxColors;
    UIImageView *_checkMarkView;
    NSMutableArray *_colorBoxes;
    UIButton *_noColorButton;
    _Bool _showNoColorButton;
    int _themeColor;
    id <ColorVariationDelegate> _delegate;
    CDUnknownBlockType _darkColorTransformerBlock;
    long long _pickerTheme;
}

- (void).cxx_destruct;
@property(nonatomic) long long pickerTheme; // @synthesize pickerTheme=_pickerTheme;
@property(copy, nonatomic) CDUnknownBlockType darkColorTransformerBlock; // @synthesize darkColorTransformerBlock=_darkColorTransformerBlock;
@property(nonatomic) _Bool showNoColorButton; // @synthesize showNoColorButton=_showNoColorButton;
@property(readonly, nonatomic) __weak id <ColorVariationDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)colorVariationRows;
- (void)clearBoxes;
- (void)noColorButtonClick:(id)arg1;
- (void)buttonClick:(id)arg1;
- (void)addCheckToButton:(id)arg1;
- (void)updateSelection;
- (void)refreshView;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool displayingSelection;
@property(nonatomic) int themeColor; // @synthesize themeColor=_themeColor;
- (void)traitCollectionDidChange:(id)arg1;
- (double)expectedHeight;
- (id)initWithThemeColor:(int)arg1 delegate:(id)arg2;

@end

