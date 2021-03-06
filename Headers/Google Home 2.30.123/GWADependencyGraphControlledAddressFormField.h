//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAResultingComponent-Protocol.h"

@class NSString, UIView;
@protocol GWADependencyGraphControlledAddressFormFieldDelegate;

@interface GWADependencyGraphControlledAddressFormField : NSObject <GWAResultingComponent>
{
    long long _uiReference;
    int _fieldReference;
    id <GWADependencyGraphControlledAddressFormFieldDelegate> _delegate;
    UIView *_addressField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *addressField; // @synthesize addressField=_addressField;
@property(readonly, nonatomic) int fieldReference; // @synthesize fieldReference=_fieldReference;
@property(nonatomic) __weak id <GWADependencyGraphControlledAddressFormFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addressFormFieldShown:(_Bool)arg1;
- (void)applyResultingAction:(id)arg1 causedByTriggers:(id)arg2;
- (void)registerWithDependencyGraph:(id)arg1;
- (id)initWithAddressFieldReference:(int)arg1 uiReference:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

