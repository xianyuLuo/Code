# -*- coding: utf-8 -*-
# Generated by Django 1.9.1 on 2016-03-05 05:56
from __future__ import unicode_literals

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('App', '0002_auto_20160305_0532'),
    ]

    operations = [
        migrations.RenameField(
            model_name='bbs',
            old_name='auth',
            new_name='author',
        ),
        migrations.AlterField(
            model_name='bbs_user',
            name='photo',
            field=models.ImageField(default=b'/home/royecode/Programming/python/django/BBS_Pro/App/upload_imgages/default.ico', upload_to=b'/home/royecode/Programming/python/django/BBS_Pro/App/upload_imgages/'),
        ),
    ]