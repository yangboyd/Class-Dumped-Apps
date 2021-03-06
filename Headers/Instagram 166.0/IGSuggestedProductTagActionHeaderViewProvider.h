//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListItemViewProvider-Protocol.h>

@class IGImageView, IGStackLayout, IGTableLayoutSpec, NSString, UILabel, UIView;
@protocol IGListItemViewProviderDelegate;

@interface IGSuggestedProductTagActionHeaderViewProvider : NSObject <IGListItemViewProvider>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGStackLayout *_stackLayout;
    _Bool _selected;
    IGTableLayoutSpec *_layoutSpec;
    id <IGListItemViewProviderDelegate> _providerDelegate;
    UIView *_bodyContentView;
    IGImageView *_leadingContentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGImageView *leadingContentView; // @synthesize leadingContentView=_leadingContentView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bodyContentView; // @synthesize bodyContentView=_bodyContentView;
@property(nonatomic) __weak id <IGListItemViewProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) IGTableLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
- (id)trailingContentView;
- (long long)trailingViewSizing;
- (long long)trailingViewAlignment;
- (double)heightForBodyFittingSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets leadingViewInsets;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithLayoutSpec:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

