//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WAContactPropertyTextFieldDelegate-Protocol.h"

@class WACountryInfo;
@protocol WANewContactPropertyCellDelegate;

@interface WANewContactPropertyCell : UITableViewCell <WAContactPropertyTextFieldDelegate>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: sideMargin
    // Error parsing type: , name: maxFontSize
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: textField
    // Error parsing type: , name: separatorView
    // Error parsing type: , name: expanded
    // Error parsing type: , name: defaultCountryInfo
    // Error parsing type: , name: countryInfo
    // Error parsing type: , name: tuple
    // Error parsing type: , name: contact
}

+ (double)desiredCellHeightForPropertyTuple:(id)arg1 expanded:(_Bool)arg2 width:(double)arg3;
+ (id)newCellFromKey:(id)arg1 reuseIdentifier:(id)arg2;
+ (double)cellLineHeight;
- (void).cxx_destruct;
- (void)updateFonts;
- (_Bool)contactPropertyTextFieldShouldBeginEditing:(id)arg1;
- (_Bool)contactPropertyTextFieldShouldReturn:(id)arg1;
- (void)contactPropertyTextFieldDidEndEditing:(id)arg1;
- (void)contactPropertyTextFieldDidBeginEditing:(id)arg1;
- (void)contactPropertyTextFieldValueChanged:(id)arg1;
- (void)configCellWithPropertyTuple:(id)arg1 contact:(id)arg2;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, retain) id tuple; // @synthesize tuple;
@property(nonatomic, retain) WACountryInfo *countryInfo; // @synthesize countryInfo;
@property(nonatomic, retain) WACountryInfo *defaultCountryInfo; // @synthesize defaultCountryInfo;
@property(nonatomic) _Bool expanded; // @synthesize expanded;
@property(nonatomic) __weak id <WANewContactPropertyCellDelegate> delegate; // @synthesize delegate;

@end

