//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class QTMButton;

@interface GKSButtonContentView : GOOBaseContentView
{
    QTMButton *_button;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) QTMButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)tapOnButton;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;

@end

