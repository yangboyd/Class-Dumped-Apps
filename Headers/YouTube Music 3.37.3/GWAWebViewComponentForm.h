//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAFlowSection-Protocol.h"
#import "GWAForm-Protocol.h"

@class GWAComponentGroup, GWARedirectForm, NSArray, NSString, OrchWebViewComponent, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate;

@interface GWAWebViewComponentForm : NSObject <GWAFlowSection, GWAForm>
{
    OrchWebViewComponent *_proto;
    GWARedirectForm *_redirectForm;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
}

@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)redirectForm;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, copy, nonatomic) NSArray *rows;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)sections;
- (id)value;
- (id)initWithForm:(id)arg1 context:(id)arg2;

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

