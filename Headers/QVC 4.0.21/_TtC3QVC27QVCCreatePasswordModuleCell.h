//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC3QVC21QVCPasswordModuleCell.h"

@class NSLayoutConstraint, UIButton, UILabel, UIView;

@interface _TtC3QVC27QVCCreatePasswordModuleCell : _TtC3QVC21QVCPasswordModuleCell
{
    // Error parsing type: , name: indicatorView
    // Error parsing type: , name: oneLetterIndicator
    // Error parsing type: , name: oneNumberIndicator
    // Error parsing type: , name: numberOfCharactersIndicator
    // Error parsing type: , name: strengthIndicatorView
    // Error parsing type: , name: strengthTitleIndicator
    // Error parsing type: , name: strengthWeakIndicator
    // Error parsing type: , name: strengthGoodIndicator
    // Error parsing type: , name: strengthStrongIndicator
    // Error parsing type: , name: oneLetterLabel
    // Error parsing type: , name: oneNumberLabel
    // Error parsing type: , name: minCharactersLabel
    // Error parsing type: , name: indicatorErrorLabel
    // Error parsing type: , name: indicatorTopConstraint
    // Error parsing type: , name: strengthIndicatorTopConstraint
    // Error parsing type: , name: shouldBeSecured
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak NSLayoutConstraint *strengthIndicatorTopConstraint; // @synthesize strengthIndicatorTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *indicatorTopConstraint; // @synthesize indicatorTopConstraint;
@property(nonatomic) __weak UILabel *indicatorErrorLabel; // @synthesize indicatorErrorLabel;
@property(nonatomic) __weak UILabel *minCharactersLabel; // @synthesize minCharactersLabel;
@property(nonatomic) __weak UILabel *oneNumberLabel; // @synthesize oneNumberLabel;
@property(nonatomic) __weak UILabel *oneLetterLabel; // @synthesize oneLetterLabel;
@property(nonatomic) __weak UIView *strengthStrongIndicator; // @synthesize strengthStrongIndicator;
@property(nonatomic) __weak UIView *strengthGoodIndicator; // @synthesize strengthGoodIndicator;
@property(nonatomic) __weak UIView *strengthWeakIndicator; // @synthesize strengthWeakIndicator;
@property(nonatomic) __weak UILabel *strengthTitleIndicator; // @synthesize strengthTitleIndicator;
@property(nonatomic) __weak UIView *strengthIndicatorView; // @synthesize strengthIndicatorView;
@property(nonatomic) __weak UIButton *numberOfCharactersIndicator; // @synthesize numberOfCharactersIndicator;
@property(nonatomic) __weak UIButton *oneNumberIndicator; // @synthesize oneNumberIndicator;
@property(nonatomic) __weak UIButton *oneLetterIndicator; // @synthesize oneLetterIndicator;
@property(nonatomic) __weak UIView *indicatorView; // @synthesize indicatorView;

@end

