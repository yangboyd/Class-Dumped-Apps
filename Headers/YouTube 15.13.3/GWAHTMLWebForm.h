//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GWADependencyGraphComponent-Protocol.h>
#import <Module_Framework/GWADependentVariableDelegate-Protocol.h>
#import <Module_Framework/GWAFlowSection-Protocol.h>
#import <Module_Framework/GWAForm-Protocol.h>
#import <Module_Framework/GWAMessageTemplateSupportingComponent-Protocol.h>
#import <Module_Framework/WKNavigationDelegate-Protocol.h>

@class GWAComponentGroup, GWADependentVariable, GWAHTMLWebView, NSArray, NSString, OrchHtmlSnippet, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate;

@interface GWAHTMLWebForm : NSObject <GWADependencyGraphComponent, GWADependentVariableDelegate, GWAFlowSection, WKNavigationDelegate, GWAForm, GWAMessageTemplateSupportingComponent>
{
    OrchHtmlSnippet *_HTMLSnippet;
    GWAHTMLWebView *_webView;
    GWADependentVariable *_htmlContent;
    NSString *_value;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
}

@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setWebView:(id)arg1;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, copy, nonatomic) NSArray *rows;
- (id)uiReferenceToComponentValuesMap;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)updatedDependentVariable:(id)arg1;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)sections;
- (id)value;
- (id)initWithHTMLSnippet:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fieldDisplayType;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool wantsCellDividers;

@end

