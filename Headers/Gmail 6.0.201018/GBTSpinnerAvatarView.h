//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTAvatarView.h"

@class MDCActivityIndicator;

@interface GBTSpinnerAvatarView : GBTAvatarView
{
    MDCActivityIndicator *_spinner;
    _Bool _spinning;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool spinning; // @synthesize spinning=_spinning;
- (void)layoutSubviews;
- (double)innerPadding;
- (id)initWithFrame:(struct CGRect)arg1;

@end

