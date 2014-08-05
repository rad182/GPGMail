/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "RemoteStoreAccountSpecialMailboxes.h"

@class NSButton;

@interface IMAPAccountSpecialMailboxes : RemoteStoreAccountSpecialMailboxes
{
    BOOL _moveDeletedMessagesToTrash;
    NSButton *_trashCheckbox;
}

@property(nonatomic) __weak NSButton *trashCheckbox; // @synthesize trashCheckbox=_trashCheckbox;
@property(nonatomic) BOOL moveDeletedMessagesToTrash; // @synthesize moveDeletedMessagesToTrash=_moveDeletedMessagesToTrash;
- (void).cxx_destruct;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (BOOL)setupAccountFromValuesInUI:(id)arg1;
- (void)setupUIFromValuesInAccount:(id)arg1;
- (id)init;

@end

