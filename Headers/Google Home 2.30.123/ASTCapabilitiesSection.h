//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DSKStreamDataSourceSection.h"

@class ASTSettingsUIAdapter;

@interface ASTCapabilitiesSection : DSKStreamDataSourceSection
{
    ASTSettingsUIAdapter *_uiAdapter;
    struct UIEdgeInsets _sectionInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASTSettingsUIAdapter *uiAdapter; // @synthesize uiAdapter=_uiAdapter;
@property(readonly, nonatomic) struct UIEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
- (_Bool)didSelectStreamItem:(id)arg1;
- (id)initWithInsets:(struct UIEdgeInsets)arg1;

@end

