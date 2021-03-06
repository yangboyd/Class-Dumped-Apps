//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;
@protocol BDPLongTermSubscribeFooterViewDelegate;

@interface BDPLongTermSubscribeFooterView : UIView
{
    id <BDPLongTermSubscribeFooterViewDelegate> _delegate;
    NSString *_refusalText;
    UILabel *_refusalLabel;
}

@property(retain, nonatomic) UILabel *refusalLabel; // @synthesize refusalLabel=_refusalLabel;
@property(copy, nonatomic) NSString *refusalText; // @synthesize refusalText=_refusalText;
@property(nonatomic) __weak id <BDPLongTermSubscribeFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refusalLabelClicked;
- (void)setupUI;
- (id)initWithRefusalText:(id)arg1;

@end

