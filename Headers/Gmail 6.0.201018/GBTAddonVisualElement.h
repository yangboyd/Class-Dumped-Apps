//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GBTVisualElement.h"

@class GPBEnumArray, NSString;

@interface GBTAddonVisualElement : GBTVisualElement
{
    NSString *_addonId;
    int _actionType;
    GPBEnumArray *_contentTypes;
}

+ (short)classID;
- (void).cxx_destruct;
- (void)writeBigtopMetadataToProto:(id)arg1;
- (id)initWithRootTag:(CDStruct_a9c8ee48)arg1 addonId:(id)arg2 actionType:(int)arg3 contentTypes:(id)arg4;
- (id)initForComposeInsertActionWithAddonId:(id)arg1 contentTypes:(id)arg2;
- (id)initWithTag:(CDStruct_a9c8ee48)arg1 parentVisualElement:(id)arg2 addonId:(id)arg3;

@end

