//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIInteractionEvent, SPTUBIMobileLocalFilesImport_Sections_Section_Item_CheckboxEventFactory;

@protocol SPTUBIMobileLocalFilesImport_Sections_Section_ItemEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitUiElementToggle;
- (id <SPTUBIMobileLocalFilesImport_Sections_Section_Item_CheckboxEventFactory>)checkboxFactoryWithPosition:(long long)arg1;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

