//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTCapabilitiesSection.h"

@class ASTMenuCollectionStreamItem, ASTMenuIconStreamItem;

@interface ASTCapabilitiesSuggestionsSection : ASTCapabilitiesSection
{
    ASTMenuIconStreamItem *_headerStreamItem;
    ASTMenuCollectionStreamItem *_collectionStreamItem;
}

- (void).cxx_destruct;
- (void)setupSectionWithSuggestions:(id)arg1 title:(id)arg2;
- (_Bool)didSelectStreamItem:(id)arg1;
- (id)initWithInsets:(struct UIEdgeInsets)arg1 title:(id)arg2 suggestions:(id)arg3;

@end

