# -*- coding: utf-8 -*-
# Generated by Django 1.9.1 on 2016-03-04 08:31
from __future__ import unicode_literals

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('App', '0002_auto_20160304_1627'),
    ]

    operations = [
        migrations.RenameField(
            model_name='posting',
            old_name='user_name',
            new_name='author',
        ),
    ]
