//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASCellNode.h>

@class ASNetworkImageNode, ASTextNode;

@interface MetaBadgePreviewModalBadgeNode : ASCellNode
{
    ASTextNode *_collectionNameNode;
    ASNetworkImageNode *_badgeImageNode;
    ASTextNode *_badgeTitleNode;
    ASTextNode *_badgeDescriptionNode;
}

@property(retain, nonatomic) ASTextNode *badgeDescriptionNode; // @synthesize badgeDescriptionNode=_badgeDescriptionNode;
@property(retain, nonatomic) ASTextNode *badgeTitleNode; // @synthesize badgeTitleNode=_badgeTitleNode;
@property(retain, nonatomic) ASNetworkImageNode *badgeImageNode; // @synthesize badgeImageNode=_badgeImageNode;
@property(retain, nonatomic) ASTextNode *collectionNameNode; // @synthesize collectionNameNode=_collectionNameNode;
- (void).cxx_destruct;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (id)initWithBadge:(id)arg1;

@end

