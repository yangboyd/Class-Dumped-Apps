//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCTextField.h"

@protocol MDCChipFieldTextFieldDelegate;

@interface MDCChipFieldTextField : MDCTextField
{
    id <MDCChipFieldTextFieldDelegate> _deletionDelegate;
}

@property(nonatomic) __weak id <MDCChipFieldTextFieldDelegate> deletionDelegate; // @synthesize deletionDelegate=_deletionDelegate;
- (void).cxx_destruct;
- (struct CGRect)accessibilityFrame;
- (void)deleteBackward;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;

@end

