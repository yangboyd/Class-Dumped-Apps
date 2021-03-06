//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTCapabilitiesSection.h"

@class ASTMenuIconStreamItem, ASTUIGroupedAgentResponse, NSMutableDictionary;

@interface ASTCapabilitiesAgentGroupSection : ASTCapabilitiesSection
{
    ASTUIGroupedAgentResponse *_group;
    _Bool _headerVisible;
    ASTMenuIconStreamItem *_headerStreamItem;
    NSMutableDictionary *_buttonTagToAgentIDDictionary;
}

- (void).cxx_destruct;
- (id)sectionTitleStreamItemWithTitle:(id)arg1;
- (id)viewControllerParameters;
- (id)streamItemForAgent:(id)arg1 accessoryButtonTag:(long long)arg2;
- (id)headerStreamItemWithAdsBanner:(_Bool)arg1;
- (void)didTapAgentAccessoryButton:(id)arg1;
- (void)didSelectHeaderStreamItem;
- (void)didSelectAgentItem:(id)arg1;
- (void)setUpSection;
- (_Bool)didSelectStreamItem:(id)arg1;
- (id)initWithInsets:(struct UIEdgeInsets)arg1 group:(id)arg2 headerVisible:(_Bool)arg3;

@end

