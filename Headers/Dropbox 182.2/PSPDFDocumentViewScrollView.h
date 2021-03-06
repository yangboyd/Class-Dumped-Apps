//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFObservableScrollView.h>

@class NSString, UIView;
@protocol PSPDFDocumentViewScrollViewDelegate;

@interface PSPDFDocumentViewScrollView : PSPDFObservableScrollView
{
    struct {
        unsigned int delegateRespondsToScrollViewDidUpdateBounds:1;
    } _flags;
    NSString *_name;
    UIView *_contentView;
}

+ (id)delegateProtocol;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (void)multicastDelegateDidChange:(id)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <PSPDFDocumentViewScrollViewDelegate> delegate; // @dynamic delegate;

@end

