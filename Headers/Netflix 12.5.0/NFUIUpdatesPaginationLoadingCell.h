//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import "NFUIActivityIndicatorProtocol-Protocol.h"

@class NFUIUpdatesCellWooWoo, NSString;

@interface NFUIUpdatesPaginationLoadingCell : UITableViewHeaderFooterView <NFUIActivityIndicatorProtocol>
{
    NFUIUpdatesCellWooWoo *_woowoo;
}

@property(retain, nonatomic) NFUIUpdatesCellWooWoo *woowoo; // @synthesize woowoo=_woowoo;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)commonInit;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAnimating) _Bool animating;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidesWhenStopped;
@property(readonly) Class superclass;

@end

