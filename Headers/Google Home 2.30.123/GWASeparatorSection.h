//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWADependencyGraphComponent-Protocol.h"
#import "GWAFlowSection-Protocol.h"

@class GWAComponentGroup, NSArray, NSString, UIColor, UIImage, UIView;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate;

@interface GWASeparatorSection : NSObject <GWADependencyGraphComponent, GWAFlowSection>
{
    UIView *_separatorView;
    id <GWAFlowSectionDelegate> delegate;
    GWAComponentGroup *_parentComponentGroup;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate;
- (void)registerWithDependencyGraph:(id)arg1;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, copy, nonatomic) NSArray *rows;
- (id)initWithProto:(id)arg1;

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

