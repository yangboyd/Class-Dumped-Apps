//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2InputData.h>

@class GWA2PanCategoryData, NSArray, NSString, ORCH2PanEntryData, ORCH2PanEntrySecureDataValue;

@interface GWA2PanEntryData : GWA2InputData
{
    ORCH2PanEntryData *_panEntryDataExtension;
    ORCH2PanEntrySecureDataValue *_panEntryDataValueExtension;
    NSArray *_categories;
    NSArray *_defaultInputTransformations;
    NSString *_rawInput;
    _Bool _hasPotentialMatch;
    GWA2PanCategoryData *_resolvedPanCategory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GWA2PanCategoryData *resolvedPanCategory; // @synthesize resolvedPanCategory=_resolvedPanCategory;
- (id)activeDataValues;
- (void)validateResolvedPanCategoryWithInput:(id)arg1;
- (id)categories;
- (_Bool)conditionMatched:(id)arg1;
- (unsigned long long)triggerTypeFromTrigger:(id)arg1;
- (_Bool)validate;
- (id)inputTransformations;
- (void)setExtensionFieldValue:(id)arg1 forFieldNumber:(int)arg2;
- (void)setInput:(id)arg1;
@property(readonly, nonatomic) NSString *placeholder;
@property(readonly, nonatomic) _Bool usesFloatingPlaceholder;
- (id)initWithData:(id)arg1 pageContext:(id)arg2;

@end

