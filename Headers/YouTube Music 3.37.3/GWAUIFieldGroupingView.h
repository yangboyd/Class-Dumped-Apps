//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

#import "GWAFormComponent-Protocol.h"

@class NSMutableArray, NSString;
@protocol GWAFormComponentDelegate, GWAUIFieldGroupingViewDelegate;

@interface GWAUIFieldGroupingView : UIStackView <GWAFormComponent>
{
    NSMutableArray *_formFields;
    _Bool _componentHidden;
    id <GWAFormComponentDelegate> formComponentDelegate;
    id <GWAUIFieldGroupingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <GWAUIFieldGroupingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isComponentHidden) _Bool componentHidden; // @synthesize componentHidden=_componentHidden;
@property(nonatomic) __weak id <GWAFormComponentDelegate> formComponentDelegate; // @synthesize formComponentDelegate;
- (void).cxx_destruct;
- (void)onUIFieldUnfocus:(id)arg1;
- (void)onUIFieldFocus:(id)arg1;
- (void)layoutSubviews;
- (void)addFormFieldArrangedSubview:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

