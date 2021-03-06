//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSString;
@protocol IBGExpandableLabelDelegate;

@interface IBGExpandableLabel : UILabel
{
    long long _state;
    id <IBGExpandableLabelDelegate> _delegate;
    NSString *_expandedExtraText;
    NSString *_fullText;
    double _spacingHeight;
}

@property(nonatomic) double spacingHeight; // @synthesize spacingHeight=_spacingHeight;
@property(copy, nonatomic) NSString *fullText; // @synthesize fullText=_fullText;
@property(copy, nonatomic) NSString *expandedExtraText; // @synthesize expandedExtraText=_expandedExtraText;
@property(nonatomic) __weak id <IBGExpandableLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)customAttributedStringFrom:(id)arg1 accessoried:(_Bool)arg2;
- (id)collpasedText;
- (id)expandedText;
- (void)toggleState;
- (void)setText:(id)arg1 withState:(long long)arg2;
- (id)initWithSpacingHeight:(double)arg1 delegate:(id)arg2;

@end

