//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewController.h"

#import "ASTStyleableContent-Protocol.h"
#import "ASTThemable-Protocol.h"

@class NSObject, NSString;
@protocol ASTThemeContainer;

@interface ASTThemableMDCCollectionViewController : MDCCollectionViewController <ASTStyleableContent, ASTThemable>
{
    unsigned long long _displayStyle;
}

+ (void)initialize;
@property(nonatomic) unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
- (void)applyTheme:(unsigned long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSObject<ASTThemeContainer> *themeSource;

@end

