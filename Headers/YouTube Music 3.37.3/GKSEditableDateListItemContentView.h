//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

#import "GKSPopoverItemPickerDelegate-Protocol.h"
#import "GOOTextFieldValidator-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class GKSPopoverItemPicker, GKSTitleIconListItemView, GOOTextField, NSDate, NSNumber, NSString, UILabel, UIView;
@protocol GKSEditableDateListItemContentViewDelegate;

@interface GKSEditableDateListItemContentView : GOOBaseContentView <GKSPopoverItemPickerDelegate, GOOTextFieldValidator, UITextFieldDelegate>
{
    GOOTextField *_dayField;
    GKSPopoverItemPicker *_monthField;
    GOOTextField *_yearField;
    UIView *_dateView;
    GKSTitleIconListItemView *_titleIconWrapper;
    id <GKSEditableDateListItemContentViewDelegate> _delegate;
    UILabel *_errorLabel;
}

+ (id)titleIconWrapperForView:(id)arg1 withObject:(id)arg2;
+ (id)monthSymbols;
+ (_Bool)requiresConstrainedBasedLayout;
+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(nonatomic) __weak id <GKSEditableDateListItemContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GKSTitleIconListItemView *titleIconWrapper; // @synthesize titleIconWrapper=_titleIconWrapper;
@property(readonly, nonatomic) UIView *dateView; // @synthesize dateView=_dateView;
@property(readonly, nonatomic) GOOTextField *yearField; // @synthesize yearField=_yearField;
@property(retain, nonatomic) GKSPopoverItemPicker *monthField; // @synthesize monthField=_monthField;
@property(readonly, nonatomic) GOOTextField *dayField; // @synthesize dayField=_dayField;
- (void).cxx_destruct;
- (void)configureFieldsForInvalidStateWithErrorMessage:(id)arg1;
- (void)configureFieldsForValidState;
- (_Bool)isNumericString:(id)arg1;
- (_Bool)allFieldsMissing;
- (_Bool)allFieldsSet;
- (_Bool)isDateInCalendar;
@property(readonly, nonatomic) NSNumber *exceptionalDateType;
- (id)dateComponents;
@property(readonly, copy, nonatomic) NSDate *date;
- (void)addLocaleOrderConstraints;
@property(readonly, nonatomic) long long announcementFrequency;
- (id)validationResultsForTextField:(id)arg1;
- (void)picker:(id)arg1 didSelectItemAtIndex:(id)arg2;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void)updateViewWithObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

