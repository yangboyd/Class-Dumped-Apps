//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAForm-Protocol.h"
#import "GWAMegalogsSupporting-Protocol.h"

@class GWAButtonFlowSection, GWALegalMessageFlowSection, GWAMegalogsContext, NSArray, NSData, NSNumber, NSString;
@protocol GWAForm;

@interface GWAFixInfoForm : NSObject <GWAForm, GWAMegalogsSupporting>
{
    NSData *_instrumentToken;
    id <GWAForm> _addressForm;
    id <GWAForm> _cardUpdateForm;
    id <GWAForm> _instrumentForm;
    GWALegalMessageFlowSection *_legalMessageSection;
    GWAButtonFlowSection *_buttonSection;
    NSArray *_sections;
    long long _uiReference;
    GWAMegalogsContext *megalogsContext;
    GWAMegalogsContext *megalogsParentContext;
    NSNumber *megalogsUIReference;
    NSArray *subcomponentsSupportingMegalogs;
}

@property(retain, nonatomic) NSArray *subcomponentsSupportingMegalogs; // @synthesize subcomponentsSupportingMegalogs;
@property(retain, nonatomic) NSNumber *megalogsUIReference; // @synthesize megalogsUIReference;
@property(nonatomic) __weak GWAMegalogsContext *megalogsParentContext; // @synthesize megalogsParentContext;
@property(retain, nonatomic) GWAMegalogsContext *megalogsContext; // @synthesize megalogsContext;
- (void).cxx_destruct;
- (void)prepareMegalogsContexts;
- (id)instrumentForm;
- (id)cardUpdateForm;
- (id)addressForm;
- (long long)formType;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)sections;
- (id)value;
- (id)initWithFixInfoForm:(id)arg1 instrumentToken:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

